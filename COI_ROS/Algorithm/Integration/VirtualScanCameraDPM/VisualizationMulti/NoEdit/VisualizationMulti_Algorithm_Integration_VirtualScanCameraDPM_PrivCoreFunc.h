//You need not to modify this file.

/*! \defgroup VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM
	\ingroup VisualizationMulti_Library Algorithm_Integration_VirtualScanCameraDPM_NodeClass
	\brief VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM defines the Algorithm_Integration_VirtualScanCameraDPM in VisualizationMulti.
*/

#ifndef VISUALIZATIONMULTI_ALGORITHM_INTEGRATION_VIRTUALSCANCAMERADPM_PRIVCOREFUNC_H
#define VISUALIZATIONMULTI_ALGORITHM_INTEGRATION_VIRTUALSCANCAMERADPM_PRIVCOREFUNC_H

#include<RobotSDK_Global.h>

/*! \defgroup VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM_PrivCoreFunc VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM_PrivCoreFunc
	\ingroup VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM
	\brief VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM_PrivCoreFunc defines the PrivCoreFunc in VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM.
*/

/*! \addtogroup VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM_PrivCoreFunc
	@{
*/

/*! \file VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM_PrivCoreFunc.h
	 Defines the PrivCoreFunc of VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM
*/

//*******************Please add other headers below*******************


#include "../Edit/VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM_Vars.h"

/*! \def NODECONFIG
	\brief Forcefully defines the NodeType_NodeClass.
*/
#ifdef NODECONFIG
#undef NODECONFIG
#endif
#define NODECONFIG VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM

/*! void VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM_getPortsSize(QList<int> & inputPortsSize, int & outputPortsNumber)
	\brief [required] Function pointer type for interface function of getting node's port(s)' size.
	\param [out] inputPortsSize The size of each input port's data buffer.
	\param [out] outputPortsNumber The number of output ports.
*/
extern "C" ROBOTSDK_OUTPUT void DECOFUNC(getPortsSize)(QList<int> & inputPortsSize, int & outputPortsNumber);

/*! void VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM_initializeParams(boost::shared_ptr<void> & paramsPtr)
	\brief [required] Function pointer type for interface function of initializing node's parameters.
	\param [out] paramsPtr The parameters embelished by boost::shared_pointer<void>.
	\details To initialize parameters:
	- paramsPtr=boost::shared_ptr<void> (new ParametersType);
*/
extern "C" ROBOTSDK_OUTPUT void DECOFUNC(initializeParams)(boost::shared_ptr<void> & paramsPtr);

/*! void VisualizationMulti_Algorithm_Integration_VirtualScanCameraDPM_initializeVars(boost::shared_ptr<void> & varsPtr)
	\brief [required] Function pointer type for interface function of initializing node's variables.
	\param [out] varsPtr The variables embelished by boost::shared_pointer<void>.
	\details To initialize variables:
	- varsPtr=boost::shared_ptr<void> (new VariablesType);
*/
extern "C" ROBOTSDK_OUTPUT void DECOFUNC(initializeVars)(boost::shared_ptr<void> & varsPtr);

/*! @}*/ 

#endif