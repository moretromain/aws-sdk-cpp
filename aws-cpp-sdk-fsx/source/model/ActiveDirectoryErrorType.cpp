﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/fsx/model/ActiveDirectoryErrorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace ActiveDirectoryErrorTypeMapper
      {

        static const int DOMAIN_NOT_FOUND_HASH = HashingUtils::HashString("DOMAIN_NOT_FOUND");
        static const int INCOMPATIBLE_DOMAIN_MODE_HASH = HashingUtils::HashString("INCOMPATIBLE_DOMAIN_MODE");
        static const int WRONG_VPC_HASH = HashingUtils::HashString("WRONG_VPC");
        static const int INVALID_DOMAIN_STAGE_HASH = HashingUtils::HashString("INVALID_DOMAIN_STAGE");


        ActiveDirectoryErrorType GetActiveDirectoryErrorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOMAIN_NOT_FOUND_HASH)
          {
            return ActiveDirectoryErrorType::DOMAIN_NOT_FOUND;
          }
          else if (hashCode == INCOMPATIBLE_DOMAIN_MODE_HASH)
          {
            return ActiveDirectoryErrorType::INCOMPATIBLE_DOMAIN_MODE;
          }
          else if (hashCode == WRONG_VPC_HASH)
          {
            return ActiveDirectoryErrorType::WRONG_VPC;
          }
          else if (hashCode == INVALID_DOMAIN_STAGE_HASH)
          {
            return ActiveDirectoryErrorType::INVALID_DOMAIN_STAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActiveDirectoryErrorType>(hashCode);
          }

          return ActiveDirectoryErrorType::NOT_SET;
        }

        Aws::String GetNameForActiveDirectoryErrorType(ActiveDirectoryErrorType enumValue)
        {
          switch(enumValue)
          {
          case ActiveDirectoryErrorType::DOMAIN_NOT_FOUND:
            return "DOMAIN_NOT_FOUND";
          case ActiveDirectoryErrorType::INCOMPATIBLE_DOMAIN_MODE:
            return "INCOMPATIBLE_DOMAIN_MODE";
          case ActiveDirectoryErrorType::WRONG_VPC:
            return "WRONG_VPC";
          case ActiveDirectoryErrorType::INVALID_DOMAIN_STAGE:
            return "INVALID_DOMAIN_STAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActiveDirectoryErrorTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
