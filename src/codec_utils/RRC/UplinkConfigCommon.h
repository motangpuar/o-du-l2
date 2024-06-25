/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_UplinkConfigCommon_H_
#define	_UplinkConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeAlignmentTimer.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FrequencyInfoUL;
struct BWP_UplinkCommon;

/* UplinkConfigCommon */
typedef struct UplinkConfigCommon {
	struct FrequencyInfoUL	*frequencyInfoUL;	/* OPTIONAL */
	struct BWP_UplinkCommon	*initialUplinkBWP;	/* OPTIONAL */
	TimeAlignmentTimer_t	 dummy;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkConfigCommon_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkConfigCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkConfigCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkConfigCommon_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkConfigCommon_H_ */
#include <asn_internal.h>
