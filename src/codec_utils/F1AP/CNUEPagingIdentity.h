/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_CNUEPagingIdentity_H_
#define	_CNUEPagingIdentity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CNUEPagingIdentity_PR {
	CNUEPagingIdentity_PR_NOTHING,	/* No components present */
	CNUEPagingIdentity_PR_fiveG_S_TMSI,
	CNUEPagingIdentity_PR_choice_extension
} CNUEPagingIdentity_PR;

/* Forward declarations */
struct ProtocolIE_SingleContainer;

/* CNUEPagingIdentity */
typedef struct CNUEPagingIdentity {
	CNUEPagingIdentity_PR present;
	union CNUEPagingIdentity_u {
		BIT_STRING_t	 fiveG_S_TMSI;
		struct ProtocolIE_SingleContainer	*choice_extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CNUEPagingIdentity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CNUEPagingIdentity;
extern asn_CHOICE_specifics_t asn_SPC_CNUEPagingIdentity_specs_1;
extern asn_TYPE_member_t asn_MBR_CNUEPagingIdentity_1[2];
extern asn_per_constraints_t asn_PER_type_CNUEPagingIdentity_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CNUEPagingIdentity_H_ */
#include <asn_internal.h>
