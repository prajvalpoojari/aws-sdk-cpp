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

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Provided configuration information for the worker UI for a labeling job.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UiConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API UiConfig
  {
  public:
    UiConfig();
    UiConfig(Aws::Utils::Json::JsonView jsonValue);
    UiConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline const Aws::String& GetUiTemplateS3Uri() const{ return m_uiTemplateS3Uri; }

    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline bool UiTemplateS3UriHasBeenSet() const { return m_uiTemplateS3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline void SetUiTemplateS3Uri(const Aws::String& value) { m_uiTemplateS3UriHasBeenSet = true; m_uiTemplateS3Uri = value; }

    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline void SetUiTemplateS3Uri(Aws::String&& value) { m_uiTemplateS3UriHasBeenSet = true; m_uiTemplateS3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline void SetUiTemplateS3Uri(const char* value) { m_uiTemplateS3UriHasBeenSet = true; m_uiTemplateS3Uri.assign(value); }

    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline UiConfig& WithUiTemplateS3Uri(const Aws::String& value) { SetUiTemplateS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline UiConfig& WithUiTemplateS3Uri(Aws::String&& value) { SetUiTemplateS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket location of the UI template, or worker task template.
     * This is the template used to render the worker UI and tools for labeling job
     * tasks. For more information about the contents of a UI template, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates-step2.html">
     * Creating Your Custom Labeling Task Template</a>.</p>
     */
    inline UiConfig& WithUiTemplateS3Uri(const char* value) { SetUiTemplateS3Uri(value); return *this;}


    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks. Do not use this parameter if you use
     * UiTemplateS3Uri.</p>
     */
    inline const Aws::String& GetHumanTaskUiArn() const{ return m_humanTaskUiArn; }

    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks. Do not use this parameter if you use
     * UiTemplateS3Uri.</p>
     */
    inline bool HumanTaskUiArnHasBeenSet() const { return m_humanTaskUiArnHasBeenSet; }

    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks. Do not use this parameter if you use
     * UiTemplateS3Uri.</p>
     */
    inline void SetHumanTaskUiArn(const Aws::String& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = value; }

    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks. Do not use this parameter if you use
     * UiTemplateS3Uri.</p>
     */
    inline void SetHumanTaskUiArn(Aws::String&& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = std::move(value); }

    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks. Do not use this parameter if you use
     * UiTemplateS3Uri.</p>
     */
    inline void SetHumanTaskUiArn(const char* value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn.assign(value); }

    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks. Do not use this parameter if you use
     * UiTemplateS3Uri.</p>
     */
    inline UiConfig& WithHumanTaskUiArn(const Aws::String& value) { SetHumanTaskUiArn(value); return *this;}

    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks. Do not use this parameter if you use
     * UiTemplateS3Uri.</p>
     */
    inline UiConfig& WithHumanTaskUiArn(Aws::String&& value) { SetHumanTaskUiArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the worker task template used to render the worker UI and tools
     * for labeling job tasks. Do not use this parameter if you use
     * UiTemplateS3Uri.</p>
     */
    inline UiConfig& WithHumanTaskUiArn(const char* value) { SetHumanTaskUiArn(value); return *this;}

  private:

    Aws::String m_uiTemplateS3Uri;
    bool m_uiTemplateS3UriHasBeenSet;

    Aws::String m_humanTaskUiArn;
    bool m_humanTaskUiArnHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
