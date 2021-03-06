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
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Health
{
namespace Model
{
  class AWS_HEALTH_API DescribeEventTypesResult
  {
  public:
    DescribeEventTypesResult();
    DescribeEventTypesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEventTypesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>List of event types to be matched with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventTypes() const{ return m_eventTypes; }

    /**
     * <p>List of event types to be matched with.</p>
     */
    inline void SetEventTypes(const Aws::Vector<Aws::String>& value) { m_eventTypes = value; }

    /**
     * <p>List of event types to be matched with.</p>
     */
    inline void SetEventTypes(Aws::Vector<Aws::String>&& value) { m_eventTypes = value; }

    /**
     * <p>List of event types to be matched with.</p>
     */
    inline DescribeEventTypesResult& WithEventTypes(const Aws::Vector<Aws::String>& value) { SetEventTypes(value); return *this;}

    /**
     * <p>List of event types to be matched with.</p>
     */
    inline DescribeEventTypesResult& WithEventTypes(Aws::Vector<Aws::String>&& value) { SetEventTypes(value); return *this;}

    /**
     * <p>List of event types to be matched with.</p>
     */
    inline DescribeEventTypesResult& AddEventTypes(const Aws::String& value) { m_eventTypes.push_back(value); return *this; }

    /**
     * <p>List of event types to be matched with.</p>
     */
    inline DescribeEventTypesResult& AddEventTypes(Aws::String&& value) { m_eventTypes.push_back(value); return *this; }

    /**
     * <p>List of event types to be matched with.</p>
     */
    inline DescribeEventTypesResult& AddEventTypes(const char* value) { m_eventTypes.push_back(value); return *this; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeEventTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeEventTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeEventTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_eventTypes;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
