// Copyright 2015 Google Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef FPL_EVENT_IDS_H_
#define FPL_EVENT_IDS_H_

namespace fpl {
namespace fpl_project {

// The list of all defined event types.
enum EventId {
  kEventIdInvalid,
  kEventIdPlayAudio,
  kEventIdProjectileFired,
  kEventIdHitPatron,
  kEventIdHitPatronBody,
  kEventIdHitPatronMouth,
  kEventIdCount
};

}  // fpl_project
}  // fpl

#endif  // FPL_EVENT_IDS_H_

