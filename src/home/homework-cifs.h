/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

#include "homework.h"
#include "user-record.h"

int home_prepare_cifs(UserRecord *h, bool already_activated, HomeSetup *setup);

int home_activate_cifs(UserRecord *h, char ***pkcs11_decrypted_passwords, UserRecord **ret_home);

int home_create_cifs(UserRecord *h, UserRecord **ret_home);
