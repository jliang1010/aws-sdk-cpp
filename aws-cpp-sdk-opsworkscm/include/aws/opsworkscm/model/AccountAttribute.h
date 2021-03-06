﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpsWorksCM
{
namespace Model
{

  /**
   * <p>Stores account attributes. </p>
   */
  class AWS_OPSWORKSCM_API AccountAttribute
  {
  public:
    AccountAttribute();
    AccountAttribute(const Aws::Utils::Json::JsonValue& jsonValue);
    AccountAttribute& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p> The attribute name. The following are supported attribute names. </p> <ul>
     * <li> <p> <i>ServerLimit:</i> The number of servers that currently existing /
     * maximal allowed. By default 10 servers can be created. </p> </li> <li> <p>
     * <i>ManualBackupLimit:</i> The number of manual backups that currently exist /
     * are maximal allowed. By default 50 manual backups can be created. </p> </li>
     * </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The attribute name. The following are supported attribute names. </p> <ul>
     * <li> <p> <i>ServerLimit:</i> The number of servers that currently existing /
     * maximal allowed. By default 10 servers can be created. </p> </li> <li> <p>
     * <i>ManualBackupLimit:</i> The number of manual backups that currently exist /
     * are maximal allowed. By default 50 manual backups can be created. </p> </li>
     * </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The attribute name. The following are supported attribute names. </p> <ul>
     * <li> <p> <i>ServerLimit:</i> The number of servers that currently existing /
     * maximal allowed. By default 10 servers can be created. </p> </li> <li> <p>
     * <i>ManualBackupLimit:</i> The number of manual backups that currently exist /
     * are maximal allowed. By default 50 manual backups can be created. </p> </li>
     * </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The attribute name. The following are supported attribute names. </p> <ul>
     * <li> <p> <i>ServerLimit:</i> The number of servers that currently existing /
     * maximal allowed. By default 10 servers can be created. </p> </li> <li> <p>
     * <i>ManualBackupLimit:</i> The number of manual backups that currently exist /
     * are maximal allowed. By default 50 manual backups can be created. </p> </li>
     * </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The attribute name. The following are supported attribute names. </p> <ul>
     * <li> <p> <i>ServerLimit:</i> The number of servers that currently existing /
     * maximal allowed. By default 10 servers can be created. </p> </li> <li> <p>
     * <i>ManualBackupLimit:</i> The number of manual backups that currently exist /
     * are maximal allowed. By default 50 manual backups can be created. </p> </li>
     * </ul>
     */
    inline AccountAttribute& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The attribute name. The following are supported attribute names. </p> <ul>
     * <li> <p> <i>ServerLimit:</i> The number of servers that currently existing /
     * maximal allowed. By default 10 servers can be created. </p> </li> <li> <p>
     * <i>ManualBackupLimit:</i> The number of manual backups that currently exist /
     * are maximal allowed. By default 50 manual backups can be created. </p> </li>
     * </ul>
     */
    inline AccountAttribute& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p> The attribute name. The following are supported attribute names. </p> <ul>
     * <li> <p> <i>ServerLimit:</i> The number of servers that currently existing /
     * maximal allowed. By default 10 servers can be created. </p> </li> <li> <p>
     * <i>ManualBackupLimit:</i> The number of manual backups that currently exist /
     * are maximal allowed. By default 50 manual backups can be created. </p> </li>
     * </ul>
     */
    inline AccountAttribute& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p> The maximum allowed value. </p>
     */
    inline int GetMaximum() const{ return m_maximum; }

    /**
     * <p> The maximum allowed value. </p>
     */
    inline void SetMaximum(int value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p> The maximum allowed value. </p>
     */
    inline AccountAttribute& WithMaximum(int value) { SetMaximum(value); return *this;}

    /**
     * <p> The current usage, such as the current number of servers associated with the
     * account. </p>
     */
    inline int GetUsed() const{ return m_used; }

    /**
     * <p> The current usage, such as the current number of servers associated with the
     * account. </p>
     */
    inline void SetUsed(int value) { m_usedHasBeenSet = true; m_used = value; }

    /**
     * <p> The current usage, such as the current number of servers associated with the
     * account. </p>
     */
    inline AccountAttribute& WithUsed(int value) { SetUsed(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    int m_maximum;
    bool m_maximumHasBeenSet;
    int m_used;
    bool m_usedHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
