/**
 *
 *  Copyright 2016 Netflix, Inc.
 *
 *     Licensed under the Apache License, Version 2.0 (the "License");
 *     you may not use this file except in compliance with the License.
 *     You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 *
 */

#pragma once

#ifndef MAIN_H_
#define MAIN_H_

int adm(const char *ref_path, const char *dis_path, int w, int h, const char *fmt);

int ansnr(const char *ref_path, const char *dis_path, int w, int h, const char *fmt);

int vif(const char *ref_path, const char *dis_path, int w, int h, const char *fmt);

int motion(const char *dis_path, int w, int h, const char *fmt);

int all(const char *ref_path, const char *dis_path, int w, int h, const char *fmt);

static const float FILTER_5_s[5] = {
		0.054488685,
		0.244201342,
		0.402619947,
		0.244201342,
		0.054488685};

static const double FILTER_5_d[5] = {
		0.05448868454964433,
		0.24420134200323346,
		0.40261994689424435,
		0.24420134200323346,
		0.05448868454964433};

#endif /* MAIN_H_ */
