set(CMAKE_CXX_STANDARD 17)

if(BUILD_TESTING)
    juce_add_console_app(my_tests)

    target_sources(my_tests
            PRIVATE
            tests.cpp
            tests.h
    )

    # Link against the shared code and JUCE libraries
    target_link_libraries(my_tests PRIVATE
            juce::juce_audio_basics
            juce::juce_audio_devices
            juce::juce_audio_formats
            juce::juce_audio_plugin_client
            juce::juce_audio_processors
            juce::juce_audio_utils
            juce::juce_core
            juce::juce_data_structures
            juce::juce_dsp
            juce::juce_events
            juce::juce_graphics
            juce::juce_gui_basics
            juce::juce_gui_extra
            juce::juce_product_unlocking
            GTest::gtest_main
            SharedCode
    )

    include(GoogleTest)

    # Finds all the Google tests associated with the executable
    gtest_discover_tests(my_tests)
endif()
