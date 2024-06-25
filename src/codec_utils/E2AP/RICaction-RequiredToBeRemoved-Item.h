/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "../../ASN1_Input/E2APV0300.asn1"
 * 	`asn1c -D ../../E2_v3.0_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_RICaction_RequiredToBeRemoved_Item_H_
#define	_RICaction_RequiredToBeRemoved_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RICactionID.h"
#include "CauseE2.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RICaction-RequiredToBeRemoved-Item */
typedef struct RICaction_RequiredToBeRemoved_Item {
	RICactionID_t	 ricActionID;
	CauseE2_t	 cause;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICaction_RequiredToBeRemoved_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICaction_RequiredToBeRemoved_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _RICaction_RequiredToBeRemoved_Item_H_ */
#include <asn_internal.h>
