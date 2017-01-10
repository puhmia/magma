
/**
 * @file /magma/src/providers/prime/signets/signets.h
 *
 * @brief DESCRIPTIONxxxGOESxxxHERE
 *
 * $Author$
 * $Date$
 * $Revision$
 *
 */

#ifndef PRIME_SIGNETS_H
#define PRIME_SIGNETS_H

/// orgs.c
prime_org_signet_t *  org_signet_alloc(void);
stringer_t *          org_signet_fingerprint(prime_org_signet_t *org, stringer_t *output);
void                  org_signet_free(prime_org_signet_t *org);
prime_org_signet_t *  org_signet_generate(prime_org_key_t *org);
stringer_t *          org_signet_get(prime_org_signet_t *org, stringer_t *output);
size_t                org_signet_length(prime_org_signet_t *org);
prime_org_signet_t *  org_signet_set(stringer_t *org);
bool_t                org_signet_verify(prime_org_signet_t *org);

/// users.c
prime_user_signet_t *  user_signet_alloc(void);
void                   user_signet_free(prime_user_signet_t *user);
prime_user_signet_t *  user_signet_request_generate(prime_user_key_t *user);
prime_user_signet_t *  user_signet_request_rotation(prime_user_key_t *previous, prime_user_key_t *user);
prime_user_signet_t *  user_signet_request_sign(prime_user_signet_t *request, prime_org_key_t *org);

#endif

