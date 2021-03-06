unix {
    INCLUDEPATH += /usr/include/eigen3

    INCLUDEPATH += /usr/include/pcl-1.7

    LIBS += -L/usr/lib -lpcl_io
    LIBS += -L/usr/lib -lpcl_common
    LIBS += -L/usr/lib -lpcl_filters
    LIBS += -L/usr/lib -lpcl_search
    LIBS += -L/usr/lib -lpcl_kdtree
    LIBS += -L/usr/lib -lpcl_features
    LIBS += -L/usr/lib -lpcl_segmentation

    LIBS += -L/usr/lib/x86_64-linux-gnu -lopencv_core
    LIBS += -L/usr/lib/x86_64-linux-gnu -lopencv_highgui
    LIBS += -L/usr/lib/x86_64-linux-gnu -lopencv_features2d
    LIBS += -L/usr/lib/x86_64-linux-gnu -lopencv_objdetect
    LIBS += -L/usr/lib/x86_64-linux-gnu -lopencv_contrib

    INCLUDEPATH += $$(HOME)/SDK/GLViewer/include
    INCLUDEPATH += $$(HOME)/SDK/ROSInterface/include
    INCLUDEPATH += $$(HOME)/SDK/DataSync/include
#    INCLUDEPATH += $$(HOME)/SDK/VirtualScan/include
    INCLUDEPATH += $$(HOME)/SDK/FastVirtualScan/include

    CONFIG(debug, debug|release){
        LIBS += -L$$(HOME)/SDK/GLViewer/lib -lGLViewer_Debug
        LIBS += -L$$(HOME)/SDK/ROSInterface/lib/ -lROSInterface_Debug
        LIBS += -L$$(HOME)/SDK/DataSync/lib/ -lDataSync_Debug
#        LIBS += -L$$(HOME)/SDK/VirtualScan/lib/ -lVirtualScan_Debug
        LIBS += -L$$(HOME)/SDK/FastVirtualScan/lib/ -lFastVirtualScan_Debug
    }else{
        LIBS += -L$$(HOME)/SDK/GLViewer/lib -lGLViewer_Release
        LIBS += -L$$(HOME)/SDK/ROSInterface/lib/ -lROSInterface_Release
        LIBS += -L$$(HOME)/SDK/DataSync/lib/ -lDataSync_Release
 #       LIBS += -L$$(HOME)/SDK/VirtualScan/lib/ -lVirtualScan_Release
        LIBS += -L$$(HOME)/SDK/FastVirtualScan/lib/ -lFastVirtualScan_Release
    }
    LIBS *= -L/usr/lib/i386-linux-gnu -lGLU

    INCLUDEPATH += /opt/ros/indigo/include

    LIBS += -L/opt/ros/indigo/lib -lroscpp
    LIBS += -L/opt/ros/indigo/lib -lrosconsole
    LIBS += -L/opt/ros/indigo/lib -lroscpp_serialization
    LIBS += -L/opt/ros/indigo/lib -lrostime
    LIBS += -L/opt/ros/indigo/lib -lxmlrpcpp
    LIBS += -L/opt/ros/indigo/lib -lcpp_common
    LIBS += -L/opt/ros/indigo/lib -lrosconsole_log4cxx
    LIBS += -L/opt/ros/indigo/lib -lrosconsole_backend_interface
    LIBS += -L/opt/ros/indigo/lib -ltf
    LIBS += -L/opt/ros/indigo/lib -ltf2
    LIBS += -L/opt/ros/indigo/lib -ltf2_ros
    LIBS += -L/opt/ros/indigo/lib -lpcl_ros_tf
    LIBS += -L/opt/ros/indigo/lib -ltf_conversions
    LIBS += -L/opt/ros/indigo/lib -lactionlib
    LIBS += -L/usr/lib/x86_64-linux-gnu -lboost_system

    INCLUDEPATH += /home/alexanderhmw/Git/Autoware/ros/devel/include

    QMAKE_CXXFLAGS += -fopenmp
    LIBS += -fopenmp
}

PROJNAME = COI_ROS
INSTTYPE = MOD





include(RobotSDK_Main.pri)