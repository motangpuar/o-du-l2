/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_CellULConfigured_H_
#define	_CellULConfigured_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellULConfigured {
	CellULConfigured_none	= 0,
	CellULConfigured_ul	= 1,
	CellULConfigured_sul	= 2,
	CellULConfigured_ul_and_sul	= 3
	/*
	 * Enumeration is extensible
	 */
} e_CellULConfigured;

/* CellULConfigured */
typedef long	 CellULConfigured_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CellULConfigured_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CellULConfigured;
extern const asn_INTEGER_specifics_t asn_SPC_CellULConfigured_specs_1;
asn_struct_free_f CellULConfigured_free;
asn_struct_print_f CellULConfigured_print;
asn_constr_check_f CellULConfigured_constraint;
ber_type_decoder_f CellULConfigured_decode_ber;
der_type_encoder_f CellULConfigured_encode_der;
xer_type_decoder_f CellULConfigured_decode_xer;
xer_type_encoder_f CellULConfigured_encode_xer;
oer_type_decoder_f CellULConfigured_decode_oer;
oer_type_encoder_f CellULConfigured_encode_oer;
per_type_decoder_f CellULConfigured_decode_uper;
per_type_encoder_f CellULConfigured_encode_uper;
per_type_decoder_f CellULConfigured_decode_aper;
per_type_encoder_f CellULConfigured_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CellULConfigured_H_ */
#include <asn_internal.h>
