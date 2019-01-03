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

#include <aws/mediaconvert/model/Mpeg2Telecine.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace Mpeg2TelecineMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SOFT_HASH = HashingUtils::HashString("SOFT");
        static const int HARD_HASH = HashingUtils::HashString("HARD");


        Mpeg2Telecine GetMpeg2TelecineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Mpeg2Telecine::NONE;
          }
          else if (hashCode == SOFT_HASH)
          {
            return Mpeg2Telecine::SOFT;
          }
          else if (hashCode == HARD_HASH)
          {
            return Mpeg2Telecine::HARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2Telecine>(hashCode);
          }

          return Mpeg2Telecine::NOT_SET;
        }

        Aws::String GetNameForMpeg2Telecine(Mpeg2Telecine enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2Telecine::NONE:
            return "NONE";
          case Mpeg2Telecine::SOFT:
            return "SOFT";
          case Mpeg2Telecine::HARD:
            return "HARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mpeg2TelecineMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
