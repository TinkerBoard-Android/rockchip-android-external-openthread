/*
 *  Copyright (c) 2016, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file
 *   This file implements the OpenThread ICMPv6 API.
 */

#include "openthread-core-config.h"

#include <openthread/icmp6.h>

#include "common/instance.hpp"
#include "common/locator_getters.hpp"

using namespace ot;

otIcmp6EchoMode otIcmp6GetEchoMode(otInstance *aInstance)
{
    Instance &instance = *static_cast<Instance *>(aInstance);

    return instance.Get<Ip6::Icmp>().GetEchoMode();
}

void otIcmp6SetEchoMode(otInstance *aInstance, otIcmp6EchoMode aMode)
{
    Instance &instance = *static_cast<Instance *>(aInstance);

    instance.Get<Ip6::Icmp>().SetEchoMode(aMode);
}

otError otIcmp6RegisterHandler(otInstance *aInstance, otIcmp6Handler *aHandler)
{
    Instance &instance = *static_cast<Instance *>(aInstance);

    return instance.Get<Ip6::Icmp>().RegisterHandler(*static_cast<Ip6::Icmp::Handler *>(aHandler));
}

otError otIcmp6SendEchoRequest(otInstance *         aInstance,
                               otMessage *          aMessage,
                               const otMessageInfo *aMessageInfo,
                               uint16_t             aIdentifier)
{
    Instance &instance = *static_cast<Instance *>(aInstance);

    return instance.Get<Ip6::Icmp>().SendEchoRequest(*static_cast<Message *>(aMessage),
                                                     *static_cast<const Ip6::MessageInfo *>(aMessageInfo), aIdentifier);
}
