/*
*
* Copyright 2017 gRPC authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
*/

#ifndef GRPC_CORE_EXT_TRANSPORT_winpipe_winpipe_TRANSPORT_H
#define GRPC_CORE_EXT_TRANSPORT_winpipe_winpipe_TRANSPORT_H

#include "src/core/lib/transport/transport_impl.h"

#ifdef __cplusplus
extern "C" {
#endif

  grpc_channel *grpc_winpipe_channel_create(grpc_server *server,
    grpc_channel_args *args,
    void *reserved);

  extern grpc_tracer_flag grpc_winpipe_trace;

  void grpc_winpipe_transport_init(void);
  void grpc_winpipe_transport_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* GRPC_CORE_EXT_TRANSPORT_winpipe_winpipe_TRANSPORT_H */
