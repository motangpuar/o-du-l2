/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "../../ASN1_Input/E2SM_KPM_V_3_0.asn1"
 * 	`asn1c -D ./../../E2_output/E2SM_KPM_v3.0_output -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "GlobalNgENB-ID.h"

asn_TYPE_member_t asn_MBR_GlobalNgENB_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GlobalNgENB_ID, pLMNIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMNIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pLMNIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GlobalNgENB_ID, ngENB_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NgENB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ngENB-ID"
		},
};
static const ber_tlv_tag_t asn_DEF_GlobalNgENB_ID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GlobalNgENB_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMNIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ngENB-ID */
};
asn_SEQUENCE_specifics_t asn_SPC_GlobalNgENB_ID_specs_1 = {
	sizeof(struct GlobalNgENB_ID),
	offsetof(struct GlobalNgENB_ID, _asn_ctx),
	asn_MAP_GlobalNgENB_ID_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GlobalNgENB_ID = {
	"GlobalNgENB-ID",
	"GlobalNgENB-ID",
	&asn_OP_SEQUENCE,
	asn_DEF_GlobalNgENB_ID_tags_1,
	sizeof(asn_DEF_GlobalNgENB_ID_tags_1)
		/sizeof(asn_DEF_GlobalNgENB_ID_tags_1[0]), /* 1 */
	asn_DEF_GlobalNgENB_ID_tags_1,	/* Same as above */
	sizeof(asn_DEF_GlobalNgENB_ID_tags_1)
		/sizeof(asn_DEF_GlobalNgENB_ID_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GlobalNgENB_ID_1,
	2,	/* Elements count */
	&asn_SPC_GlobalNgENB_ID_specs_1	/* Additional specs */
};

