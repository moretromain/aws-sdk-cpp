﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LaunchActionRunStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace LaunchActionRunStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        LaunchActionRunStatus GetLaunchActionRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return LaunchActionRunStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return LaunchActionRunStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return LaunchActionRunStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchActionRunStatus>(hashCode);
          }

          return LaunchActionRunStatus::NOT_SET;
        }

        Aws::String GetNameForLaunchActionRunStatus(LaunchActionRunStatus enumValue)
        {
          switch(enumValue)
          {
          case LaunchActionRunStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case LaunchActionRunStatus::SUCCEEDED:
            return "SUCCEEDED";
          case LaunchActionRunStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchActionRunStatusMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
