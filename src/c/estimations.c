/*
 * Copyright 2014 Charles University in Prague
 * Copyright 2014 Vojtech Horky
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// TODO: replace later with some real check
#define USE_GETRUSAGE

#include "cz_cuni_mff_d3s_perf_OverheadEstimations.h"
#include "microbench.h"
#include <stdlib.h>
#include <time.h>
#include <string.h>
#ifdef USE_GETRUSAGE
#include <sys/resource.h>
#endif


void JNICALL Java_cz_cuni_mff_d3s_perf_OverheadEstimations_emptyNativeCall(
		JNIEnv *env, jclass klass) {
	return;
}


void JNICALL Java_cz_cuni_mff_d3s_perf_OverheadEstimations_resourceUsageCall(
		JNIEnv *env, jclass klass) {
#ifdef USE_GETRUSAGE
	struct rusage resource_usage;
	getrusage(RUSAGE_SELF, &resource_usage);
#endif
}

