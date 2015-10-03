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

#ifndef ZOOSHI_STATES_H
#define ZOOSHI_STATES_H

namespace fpl {
namespace fpl_project {

enum GameState {
  kGameStateLoading,
  kGameStateGameplay,
  kGameStatePause,
  kGameStateGameMenu,
  kGameStateIntro,
  kGameStateWorldEditor,
  kGameStateGameOver,
  kGameStateCount,
  kGameStateExit = kGameStateCount
};

}  // fpl_project
}  // fpl

#endif  // ZOOSHI_STATES_H
