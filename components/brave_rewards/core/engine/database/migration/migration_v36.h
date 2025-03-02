/* Copyright (c) 2022 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_COMPONENTS_BRAVE_REWARDS_CORE_ENGINE_DATABASE_MIGRATION_MIGRATION_V36_H_
#define BRAVE_COMPONENTS_BRAVE_REWARDS_CORE_ENGINE_DATABASE_MIGRATION_MIGRATION_V36_H_

namespace brave_rewards::internal::database::migration {

// Migration 36 converts all stored publisher status values of "CONNECTED" to
// "NOT_VERIFIED".
const char v36[] = R"(
  UPDATE server_publisher_info SET status = 0 WHERE status = 1;
)";

}  // namespace brave_rewards::internal::database::migration

#endif  // BRAVE_COMPONENTS_BRAVE_REWARDS_CORE_ENGINE_DATABASE_MIGRATION_MIGRATION_V36_H_
