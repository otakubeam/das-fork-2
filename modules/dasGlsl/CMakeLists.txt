IF(NOT DAS_GLSL_INCLUDED)
    SET(DAS_GLSL_INCLUDED TRUE)
    MESSAGE(STATUS "dasGlsl module included.")

	ADD_MODULE_DAS(glsl glsl glsl_common)
	ADD_MODULE_DAS(glsl glsl glsl_internal)
    ADD_MODULE_DAS(geometry glsl geom_gen)

    install(DIRECTORY ${PROJECT_SOURCE_DIR}/modules/dasGlsl/glsl
        DESTINATION modules/dasGlsl
        FILES_MATCHING
        PATTERN "*.das"
    )
ENDIF()
