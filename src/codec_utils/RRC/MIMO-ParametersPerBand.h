/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../../../rrc_15.5.1_asn.asn1"
 * 	`asn1c -D ./rrc_out_hlal -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_MIMO_ParametersPerBand_H_
#define	_MIMO_ParametersPerBand_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC {
	MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n4	= 0,
	MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n8	= 1,
	MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n16	= 2,
	MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n32	= 3,
	MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n64	= 4,
	MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n128	= 5
} e_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC;
typedef enum MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP {
	MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP_n1	= 0,
	MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP_n2	= 1,
	MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP_n4	= 2,
	MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP_n8	= 3
} e_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP;
typedef enum MIMO_ParametersPerBand__additionalActiveTCI_StatePDCCH {
	MIMO_ParametersPerBand__additionalActiveTCI_StatePDCCH_supported	= 0
} e_MIMO_ParametersPerBand__additionalActiveTCI_StatePDCCH;
typedef enum MIMO_ParametersPerBand__pusch_TransCoherence {
	MIMO_ParametersPerBand__pusch_TransCoherence_nonCoherent	= 0,
	MIMO_ParametersPerBand__pusch_TransCoherence_partialCoherent	= 1,
	MIMO_ParametersPerBand__pusch_TransCoherence_fullCoherent	= 2
} e_MIMO_ParametersPerBand__pusch_TransCoherence;
typedef enum MIMO_ParametersPerBand__beamCorrespondence {
	MIMO_ParametersPerBand__beamCorrespondence_supported	= 0
} e_MIMO_ParametersPerBand__beamCorrespondence;
typedef enum MIMO_ParametersPerBand__periodicBeamReport {
	MIMO_ParametersPerBand__periodicBeamReport_supported	= 0
} e_MIMO_ParametersPerBand__periodicBeamReport;
typedef enum MIMO_ParametersPerBand__aperiodicBeamReport {
	MIMO_ParametersPerBand__aperiodicBeamReport_supported	= 0
} e_MIMO_ParametersPerBand__aperiodicBeamReport;
typedef enum MIMO_ParametersPerBand__sp_BeamReportPUCCH {
	MIMO_ParametersPerBand__sp_BeamReportPUCCH_supported	= 0
} e_MIMO_ParametersPerBand__sp_BeamReportPUCCH;
typedef enum MIMO_ParametersPerBand__sp_BeamReportPUSCH {
	MIMO_ParametersPerBand__sp_BeamReportPUSCH_supported	= 0
} e_MIMO_ParametersPerBand__sp_BeamReportPUSCH;
typedef enum MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_15kHz {
	MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_15kHz_n4	= 0,
	MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_15kHz_n7	= 1,
	MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_15kHz_n14	= 2
} e_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_15kHz;
typedef enum MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_30kHz {
	MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_30kHz_n4	= 0,
	MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_30kHz_n7	= 1,
	MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_30kHz_n14	= 2
} e_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_30kHz;
typedef enum MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_60kHz {
	MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_60kHz_n4	= 0,
	MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_60kHz_n7	= 1,
	MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_60kHz_n14	= 2
} e_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_60kHz;
typedef enum MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_120kHz {
	MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_120kHz_n4	= 0,
	MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_120kHz_n7	= 1,
	MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_120kHz_n14	= 2
} e_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_120kHz;
typedef enum MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_240kHz {
	MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_240kHz_n4	= 0,
	MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_240kHz_n7	= 1,
	MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_240kHz_n14	= 2
} e_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_240kHz;
typedef enum MIMO_ParametersPerBand__maxNumberNonGroupBeamReporting {
	MIMO_ParametersPerBand__maxNumberNonGroupBeamReporting_n1	= 0,
	MIMO_ParametersPerBand__maxNumberNonGroupBeamReporting_n2	= 1,
	MIMO_ParametersPerBand__maxNumberNonGroupBeamReporting_n4	= 2
} e_MIMO_ParametersPerBand__maxNumberNonGroupBeamReporting;
typedef enum MIMO_ParametersPerBand__groupBeamReporting {
	MIMO_ParametersPerBand__groupBeamReporting_supported	= 0
} e_MIMO_ParametersPerBand__groupBeamReporting;
typedef enum MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM {
	MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM_n2	= 0,
	MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM_n4	= 1,
	MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM_n8	= 2,
	MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM_n16	= 3
} e_MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM;
typedef enum MIMO_ParametersPerBand__twoPortsPTRS_DL {
	MIMO_ParametersPerBand__twoPortsPTRS_DL_supported	= 0
} e_MIMO_ParametersPerBand__twoPortsPTRS_DL;
typedef enum MIMO_ParametersPerBand__twoPortsPTRS_UL {
	MIMO_ParametersPerBand__twoPortsPTRS_UL_supported	= 0
} e_MIMO_ParametersPerBand__twoPortsPTRS_UL;
typedef enum MIMO_ParametersPerBand__beamReportTiming__scs_15kHz {
	MIMO_ParametersPerBand__beamReportTiming__scs_15kHz_sym2	= 0,
	MIMO_ParametersPerBand__beamReportTiming__scs_15kHz_sym4	= 1,
	MIMO_ParametersPerBand__beamReportTiming__scs_15kHz_sym8	= 2
} e_MIMO_ParametersPerBand__beamReportTiming__scs_15kHz;
typedef enum MIMO_ParametersPerBand__beamReportTiming__scs_30kHz {
	MIMO_ParametersPerBand__beamReportTiming__scs_30kHz_sym4	= 0,
	MIMO_ParametersPerBand__beamReportTiming__scs_30kHz_sym8	= 1,
	MIMO_ParametersPerBand__beamReportTiming__scs_30kHz_sym14	= 2,
	MIMO_ParametersPerBand__beamReportTiming__scs_30kHz_sym28	= 3
} e_MIMO_ParametersPerBand__beamReportTiming__scs_30kHz;
typedef enum MIMO_ParametersPerBand__beamReportTiming__scs_60kHz {
	MIMO_ParametersPerBand__beamReportTiming__scs_60kHz_sym8	= 0,
	MIMO_ParametersPerBand__beamReportTiming__scs_60kHz_sym14	= 1,
	MIMO_ParametersPerBand__beamReportTiming__scs_60kHz_sym28	= 2
} e_MIMO_ParametersPerBand__beamReportTiming__scs_60kHz;
typedef enum MIMO_ParametersPerBand__beamReportTiming__scs_120kHz {
	MIMO_ParametersPerBand__beamReportTiming__scs_120kHz_sym14	= 0,
	MIMO_ParametersPerBand__beamReportTiming__scs_120kHz_sym28	= 1,
	MIMO_ParametersPerBand__beamReportTiming__scs_120kHz_sym56	= 2
} e_MIMO_ParametersPerBand__beamReportTiming__scs_120kHz;
typedef enum MIMO_ParametersPerBand__aperiodicTRS {
	MIMO_ParametersPerBand__aperiodicTRS_supported	= 0
} e_MIMO_ParametersPerBand__aperiodicTRS;

/* Forward declarations */
struct BeamManagementSSB_CSI_RS;
struct SRS_Resources;
struct CSI_RS_ForTracking;
struct PTRS_DensityRecommendationDL;
struct PTRS_DensityRecommendationUL;

/* MIMO-ParametersPerBand */
typedef struct MIMO_ParametersPerBand {
	struct MIMO_ParametersPerBand__tci_StatePDSCH {
		long	*maxNumberConfiguredTCIstatesPerCC;	/* OPTIONAL */
		long	*maxNumberActiveTCI_PerBWP;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tci_StatePDSCH;
	long	*additionalActiveTCI_StatePDCCH;	/* OPTIONAL */
	long	*pusch_TransCoherence;	/* OPTIONAL */
	long	*beamCorrespondence;	/* OPTIONAL */
	long	*periodicBeamReport;	/* OPTIONAL */
	long	*aperiodicBeamReport;	/* OPTIONAL */
	long	*sp_BeamReportPUCCH;	/* OPTIONAL */
	long	*sp_BeamReportPUSCH;	/* OPTIONAL */
	struct BeamManagementSSB_CSI_RS	*beamManagementSSB_CSI_RS;	/* OPTIONAL */
	long	*maxNumberRxBeam;	/* OPTIONAL */
	struct MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL {
		long	*scs_15kHz;	/* OPTIONAL */
		long	*scs_30kHz;	/* OPTIONAL */
		long	*scs_60kHz;	/* OPTIONAL */
		long	*scs_120kHz;	/* OPTIONAL */
		long	*scs_240kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *maxNumberRxTxBeamSwitchDL;
	long	*maxNumberNonGroupBeamReporting;	/* OPTIONAL */
	long	*groupBeamReporting;	/* OPTIONAL */
	struct MIMO_ParametersPerBand__uplinkBeamManagement {
		long	 maxNumberSRS_ResourcePerSet_BM;
		long	 maxNumberSRS_ResourceSet;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uplinkBeamManagement;
	long	*maxNumberCSI_RS_BFR;	/* OPTIONAL */
	long	*maxNumberSSB_BFR;	/* OPTIONAL */
	long	*maxNumberCSI_RS_SSB_BFR;	/* OPTIONAL */
	long	*twoPortsPTRS_DL;	/* OPTIONAL */
	long	*twoPortsPTRS_UL;	/* OPTIONAL */
	struct SRS_Resources	*supportedSRS_Resources;	/* OPTIONAL */
	long	*maxNumberSimultaneousSRS_PerCC;	/* OPTIONAL */
	struct MIMO_ParametersPerBand__beamReportTiming {
		long	*scs_15kHz;	/* OPTIONAL */
		long	*scs_30kHz;	/* OPTIONAL */
		long	*scs_60kHz;	/* OPTIONAL */
		long	*scs_120kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *beamReportTiming;
	struct MIMO_ParametersPerBand__ptrs_DensityRecommendationSetDL {
		struct PTRS_DensityRecommendationDL	*scs_15kHz;	/* OPTIONAL */
		struct PTRS_DensityRecommendationDL	*scs_30kHz;	/* OPTIONAL */
		struct PTRS_DensityRecommendationDL	*scs_60kHz;	/* OPTIONAL */
		struct PTRS_DensityRecommendationDL	*scs_120kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ptrs_DensityRecommendationSetDL;
	struct MIMO_ParametersPerBand__ptrs_DensityRecommendationSetUL {
		struct PTRS_DensityRecommendationUL	*scs_15kHz;	/* OPTIONAL */
		struct PTRS_DensityRecommendationUL	*scs_30kHz;	/* OPTIONAL */
		struct PTRS_DensityRecommendationUL	*scs_60kHz;	/* OPTIONAL */
		struct PTRS_DensityRecommendationUL	*scs_120kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ptrs_DensityRecommendationSetUL;
	struct CSI_RS_ForTracking	*csi_RS_ForTracking;	/* OPTIONAL */
	long	*aperiodicTRS;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MIMO_ParametersPerBand_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberConfiguredTCIstatesPerCC_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberActiveTCI_PerBWP_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_additionalActiveTCI_StatePDCCH_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pusch_TransCoherence_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_beamCorrespondence_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_periodicBeamReport_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_aperiodicBeamReport_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sp_BeamReportPUCCH_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sp_BeamReportPUSCH_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_15kHz_34;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_30kHz_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_60kHz_42;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_120kHz_46;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_240kHz_50;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberNonGroupBeamReporting_54;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_groupBeamReporting_58;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberSRS_ResourcePerSet_BM_61;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_twoPortsPTRS_DL_70;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_twoPortsPTRS_UL_72;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_15kHz_77;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_30kHz_81;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_60kHz_86;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_scs_120kHz_90;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_aperiodicTRS_105;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MIMO_ParametersPerBand;
extern asn_SEQUENCE_specifics_t asn_SPC_MIMO_ParametersPerBand_specs_1;
extern asn_TYPE_member_t asn_MBR_MIMO_ParametersPerBand_1[26];

#ifdef __cplusplus
}
#endif

#endif	/* _MIMO_ParametersPerBand_H_ */
#include <asn_internal.h>