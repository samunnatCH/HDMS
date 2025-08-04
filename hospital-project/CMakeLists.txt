cmake_minimum_required(VERSION 3.16)

project(HDMS VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Svg Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Svg Sql)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(HDMS
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}

        form.ui
        form.h
        form.cpp
        image.qrc
        form2.ui
        user.h
        user.cpp
        user.ui
        user_session.h
        welcome.ui
        welcome.h
        welcome.cpp
        form2.h
        form2.cpp
        resourse/profile.jpg
        resourse/ui1.png
        schedule.h schedule.cpp schedule.ui
        logout.h logout.cpp logout.ui
        medical.h medical.cpp medical.ui
        setting.h setting.cpp setting.ui
         appicon.rc

        icons/email.png icons/heart.png icons/location.png icons/person.png icons/phone.png icons/pressure.png icons/sugar.png icons/weight.png icons/blood.png

    icons/icon.jpeg icons/chol.png icons/medical.png icons/appointment.png icons/setting.png icons/logout.png icons/schedule.png icons/dashboard.png
    )
else()
    if(ANDROID)
        add_library(HDMS SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(HDMS
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(HDMS PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Sql Qt${QT_VERSION_MAJOR}::Svg Qt${QT_VERSION_MAJOR}::Core)

if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.HDMS)
endif()
set_target_properties(HDMS PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS HDMS
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(HDMS)
endif()
