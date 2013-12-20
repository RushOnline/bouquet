/*
 * Copyright (c) 1997-2005 Alexandros Eleftheriadis and Danny Hong.
 *
 * This file is part of Flavor, developed at Columbia University
 * (http://flavor.sourceforge.net).
 *
 * Flavor is free software; you can redistribute it and/or modify
 * it under the terms of the Flavor Artistic License as described in
 * the file COPYING.txt. 
 *
 */

/*
 * Authors:
 * Danny Hong <danny@ee.columbia.edu>
 * Alexandros Eleftheriadis <eleft@ee.columbia.edu>
 *
 */

#ifndef _cbac_h_
#define _cbac_h_

/* operation ordering convention */
typedef enum {
    OOC_MULT,           /* multiply first: default */
    OOC_DIV,            /* divide first */
    OOC_FBAC            /* no multiplicative operation performed --> FBAC */
} ooc_t;

/* symbol ordering convention */
typedef enum {
    SOC_LM,             /* the LPS over the MPS: default */
    SOC_ML,             /* the MPS over the LPS */
    SOC_01,             /* the symbol 0 over 1 */
    SOC_10              /* the symbol 1 over 0 */
} soc_t;

/* truncation error assignment */
typedef enum {
    TE_0,               /* the TE is assigned to the LPS or the symbol 0 */
    TE_1                /* the TE is assigned to the MPS or the symbol 1: default */
} te_t;

/* renormalization type */
typedef enum {
    RENORM_ORG,         /* the straightforward renormalization method */
    RENORM_QUASI        /* the semi-quasi-renormalization method */
} renorm_t;

/* carry-over problem prevention */
typedef enum {
    CO_FO,              /* use the FO method to prevent the CO problem: default */
    CO_BS               /* use the BS method to prevent the CO problem */
} co_t;

/* special actions needed by the end param */
typedef enum {
    END_NONE,           /* no special action needed */
    END_ALIGN_0,        /* byte align with 0-bits */
    END_ALIGN_1,        /* byte align with 1-bits */
    END_MP4_SHAPE       /* if end_bits=0, then don't output min num of bits if current interval's endpoint includes 0 or 1 */
} end_t;

/* the possible prob transitions */
typedef enum {
    TRANS_SYM,          /* apply prob transition after coding of each symbol */
    TRANS_RENORM        /* apply prob transition if renorm is applied */
} trans_t;

/* the type values for the bpf fn */
typedef enum {
    BPF_CACM,           /* the bpf fn for the CACM implementation */
    BPF_TOIS            /* the bpf fn for the TOIS implementation */
} bpf_t;

/* generate bac definition */
void bac_decl(symbol_t *sp, list_t *stmts);


#endif /* ! _cbac_h_ */

