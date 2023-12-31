# note - uncomment to support standard dialogs with linux\gtx
# TODO: use CMAKE to detect linux\gtx\etc
SET(LINUX_GTK FALSE)

SET(DAS_STDDLG_DETECTED TRUE)

IF ((NOT DAS_STDDLG_INCLUDED) AND ((NOT ${DAS_STDDLG_DISABLED}) OR (NOT DEFINED DAS_STDDLG_DISABLED)))
    SET(DAS_STDDLG_INCLUDED TRUE)
    MESSAGE(STATUS "dasStdDlg module included.")

	SET(DAS_STDDLG_DIR ${PROJECT_SOURCE_DIR}/modules/dasStdDlg)

    LIST(APPEND CMAKE_MODULE_PATH ${DAS_STDDLG_DIR})

	# libDasModuleStdDlg
	SET(DAS_STDDLG_MODULE_SRC
		${DAS_STDDLG_DIR}/src/dasStdDlg.h
		${DAS_STDDLG_DIR}/src/dasStdDlg.cpp
	)

	IF(WIN32)
		SET(DAS_STDDLG_MODULE_PLATFORM_SRC
			${DAS_STDDLG_DIR}/src/dasStdDlgWin.cpp
		)
	ELSEIF(LINUX_GTK)
		SET(DAS_STDDLG_MODULE_PLATFORM_SRC
			${DAS_STDDLG_DIR}/src/dasStdDlgGtk.cpp
		)
	ELSEIF(APPLE)
		SET(DAS_STDDLG_MODULE_PLATFORM_SRC
			${DAS_STDDLG_DIR}/src/dasStdDlgOsx.mm
		)
	ELSE()
		SET(DAS_STDDLG_MODULE_PLATFORM_SRC
			${DAS_STDDLG_DIR}/src/dasStdDlgNotImplemented.cpp
		)
	ENDIF()

	ADD_MODULE_LIB(libDasModuleStdDlg)
	ADD_MODULE_CPP(StdDlg)
	# ADD_MODULE_NATIVE(STDDLG_boost)
	ADD_LIBRARY(libDasModuleStdDlg ${DAS_STDDLG_MODULE_SRC} ${DAS_STDDLG_MODULE_PLATFORM_SRC})
	TARGET_LINK_LIBRARIES(libDasModuleStdDlg ${STDDLG_LIBRARIES})
	# ADD_DEPENDENCIES(libDasModuleStdDlg)
	TARGET_INCLUDE_DIRECTORIES(libDasModuleStdDlg PUBLIC ${STDDLG_INCLUDE_DIR})

	IF(WIN32)
		TARGET_LINK_LIBRARIES(libDasModuleStdDlg ShLwApi)
	ENDIF()

	IF(LINUX_GTK)
		find_package(PkgConfig REQUIRED)
		pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
		include_directories(${GTK3_INCLUDE_DIRS})
		link_directories(${GTK3_LIBRARY_DIRS})
		add_definitions(${GTK3_CFLAGS_OTHER})
		TARGET_LINK_LIBRARIES(libDasModuleStdDlg ${GTK3_LIBRARIES})
	ENDIF()

	IF(APPLE)
		TARGET_LINK_LIBRARIES(libDasModuleStdDlg
			"-framework AppKit"
		)
	ENDIF()

	SETUP_CPP11(libDasModuleStdDlg)
ENDIF()
