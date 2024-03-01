#ifndef KEM_H
#define KEM_H

#include <stdint.h>
#include "params.h"

int crypto_kem_keypair_derand(uint8_t *pk, uint8_t *sk, const uint8_t *coins);

int crypto_kem_keypair(uint8_t *pk, uint8_t *sk);

int crypto_kem_enc_derand(uint8_t *ct, uint8_t *ss, const uint8_t *pk, const uint8_t *coins);

int crypto_kem_enc(uint8_t *ct, uint8_t *ss, const uint8_t *pk);

int crypto_kem_dec(uint8_t *ss, const uint8_t *ct, const uint8_t *sk);

#endif
