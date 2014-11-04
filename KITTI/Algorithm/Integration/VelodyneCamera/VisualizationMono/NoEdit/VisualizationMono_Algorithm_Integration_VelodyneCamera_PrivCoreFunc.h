//You need not to modify this file.

/*! \defgroup VisualizationMono_Algorithm_Integration_VelodyneCamera VisualizationMono_Algorithm_Integration_VelodyneCamera
	\ingroup VisualizationMono_Library Algorithm_Integration_VelodyneCamera_NodeClass
	\brief VisualizationMono_Algorithm_Integration_VelodyneCamera defines the Algorithm_Integration_VelodyneCamera in VisualizationMono.
*/

#ifndef VISUALIZATIONMONO_ALGORITHM_INTEGRATION_VELODYNECAMERA_PRIVCOREFUNC_H
#define VISUALIZATIONMONO_ALGORITHM_INTEGRATION_VELODYNECAMERA_PRIVCOREFUNC_H

#include<RobotSDK_Global.h>

/*! \defgroup VisualizationMono_Algorithm_Integration_VelodyneCamera_PrivCoreFunc VisualizationMono_Algorithm_Integration_VelodyneCamera_PrivCoreFunc
	\ingroup VisualizationMono_Algorithm_Integration_VelodyneCamera
	\brief VisualizationMono_Algorithm_Integration_VelodyneCamera_PrivCoreFunc defines the PrivCoreFunc in VisualizationMono_Algorithm_Integration_VelodyneCamera.
*/

/*! \addtogroup VisualizationMono_Algorithm_Integration_VelodyneCamera_PrivCoreFunc
	@{
*/

/*! \file VisualizationMono_Algorithm_Integration_VelodyneCamera_PrivCoreFunc.h
	 Defines the PrivCoreFunc of VisualizationMono_Algorithm_Integration_VelodyneCamera
*/

//*******************Please add other headers below*******************


#include "../Edit/VisualizationMono_Algorithm_Integration_VelodyneCamera_ParamsData.h"
#include "../Edit/VisualizationMono_Algorithm_Integration_VelodyneCamera_Vars.h"

/*! \def NODECONFIG
	\brief Forcefully defines the NodeType_NodeClass.
*/
#ifdef NODECONFIG
#undef NODECONFIG
#endif
#define NODECONFIG VisualizationMono_Algorithm_Integration_VelodyneCamera

/*! void VisualizationMono_Algorithm_Integration_VelodyneCamera_getPortsSize(QList<int> & inputPortsSize, int & outputPortsNumber)
	\brief [required] Function pointer type for interface function of getting node's port(s)' size.
	\param [out] inputPortsSize The size of each input port's data buffer.
	\param [out] outputPortsNumber The number of output ports.
*/
extern "C" ROBOTSDK_OUTPUT void DECOFUNC(getPortsSize)(QList<int> & inputPortsSize, int & outputPortsNumber);

/*! void VisualizationMono_Algorithm_Integration_VelodyneCamera_initializeParams(boost::shared_ptr<void> & paramsPtr)
	\brief [required] Function pointer type for interface function of initializing node's parameters.
	\param [out] paramsPtr The parameters embelished by boost::shared_pointer<void>.
	\details To initialize parameters:
	- paramsPtr=boost::shared_ptr<void> (new ParametersType);
*/
extern "C" ROBOTSDK_OUTPUT void DECOFUNC(initializeParams)(boost::shared_ptr<void> & paramsPtr);

/*! void VisualizationMono_Algorithm_Integration_VelodyneCamera_initializeVars(boost::shared_ptr<void> & varsPtr)
	\brief [required] Function pointer type for interface function of initializing node's variables.
	\param [out] varsPtr The variables embelished by boost::shared_pointer<void>.
	\details To initialize variables:
	- varsPtr=boost::shared_ptr<void> (new VariablesType);
*/
extern "C" ROBOTSDK_OUTPUT void DECOFUNC(initializeVars)(boost::shared_ptr<void> & varsPtr);

/*! @}*/ 

#endif