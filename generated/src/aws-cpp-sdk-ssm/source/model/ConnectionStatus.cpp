﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ConnectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace ConnectionStatusMapper
      {

        static const int connected_HASH = HashingUtils::HashString("connected");
        static const int notconnected_HASH = HashingUtils::HashString("notconnected");


        ConnectionStatus GetConnectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == connected_HASH)
          {
            return ConnectionStatus::connected;
          }
          else if (hashCode == notconnected_HASH)
          {
            return ConnectionStatus::notconnected;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionStatus>(hashCode);
          }

          return ConnectionStatus::NOT_SET;
        }

        Aws::String GetNameForConnectionStatus(ConnectionStatus enumValue)
        {
          switch(enumValue)
          {
          case ConnectionStatus::connected:
            return "connected";
          case ConnectionStatus::notconnected:
            return "notconnected";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionStatusMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
