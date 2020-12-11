/*******************************************************************************
 * This file is part of the ARK Ledger App.
 *
 * Copyright (c) ARK Ecosystem <info@ark.io>
 *
 * The MIT License (MIT)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 ******************************************************************************/

#ifndef ARK_OPERATIONS_TRANSACTIONS_ASSETS_TYPES_H
#define ARK_OPERATIONS_TRANSACTIONS_ASSETS_TYPES_H

////////////////////////////////////////////////////////////////////////////////
// ARK Transaction TypeGroups
enum TransactionTypeGroup {
/*  TEST_TYPE           = 0, */
    CORE_TYPE           = 1,
    MAGISTRATE_TYPE     = 2,
};

////////////////////////////////////////////////////////////////////////////////
// ARK Transaction Types
enum TransactionTypes {
    TRANSFER_TYPE                   = 0,
/*  SECOND_SIGNATURE_TYPE           = 1, */
/*  DELEGATE_REGISTRATION_TYPE      = 2, */
    VOTE_TYPE                       = 3,
/*  MULTI_SIGNATURE_TYPE            = 4, */
    IPFS_TYPE                       = 5,
/*  MULTI_PAYMENT_TYPE              = 6, */
/*  DELEGATE_RESIGNATION_TYPE       = 7, */
    HTLC_LOCK_TYPE                  = 8,
    HTLC_CLAIM_TYPE                 = 9,
    HTLC_REFUND_TYPE                = 10
};

////////////////////////////////////////////////////////////////////////////////
// ARK Magistrate Transaction Types
enum MagistrateTransactionType {
/*  BusinessRegistration            = 0, */
/*  BusinessResignation             = 1, */
/*  BusinessUpdate                  = 2, */
/*  BridgechainRegistration         = 3, */
/*  BridgechainResignation          = 4, */
/*  BridgechainUpdate               = 5, */
    ENTITY_TYPE                     = 6,
};

#endif  // ARK_OPERATIONS_TRANSACTIONS_ASSETS_TYPES_H
