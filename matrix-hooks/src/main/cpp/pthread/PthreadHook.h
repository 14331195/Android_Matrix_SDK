/*
 * Tencent is pleased to support the open source community by making wechat-matrix available.
 * Copyright (C) 2021 THL A29 Limited, a Tencent company. All rights reserved.
 * Licensed under the BSD 3-Clause License (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
// Created by YinSheng Tang on 2021/4/29.
//

#ifndef LIBMATRIX_ANDROID_PTHREADHOOK_H
#define LIBMATRIX_ANDROID_PTHREADHOOK_H


namespace pthread_hook {
    typedef void* (*pthread_routine_t)(void*);

    extern void SetThreadTraceEnabled(bool enabled);
    extern void SetThreadStackShrinkEnabled(bool enabled);
    extern void SetThreadStackShrinkIgnoredCreatorSoPatterns(const char** patterns, size_t pattern_count);
    extern void InstallHooks(bool enable_debug);
}


#endif //LIBMATRIX_ANDROID_PTHREADHOOK_H
