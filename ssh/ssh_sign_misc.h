/**
 * @file ssh_sign_misc.h
 * @brief Helper functions for signature generation and verification
 *
 * @section License
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * Copyright (C) 2019-2024 Oryx Embedded SARL. All rights reserved.
 *
 * This file is part of CycloneSSH Open.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * @author Oryx Embedded SARL (www.oryx-embedded.com)
 * @version 2.4.2
 **/

#ifndef _SSH_SIGN_MISC_H
#define _SSH_SIGN_MISC_H

//Dependencies
#include "ssh/ssh.h"

//C++ guard
#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief ECDSA signature
 **/

typedef struct
{
   SshBinaryString r;
   SshBinaryString s;
} SshEcdsaSignature;


//SSH related functions
error_t sshFormatEcdsaSignature(const SshEcdsaSignature *signature,
   uint8_t *p, size_t *written);

error_t sshParseEcdsaSignature(const uint8_t *data, size_t length,
   SshEcdsaSignature *signature);

//C++ guard
#ifdef __cplusplus
}
#endif

#endif
