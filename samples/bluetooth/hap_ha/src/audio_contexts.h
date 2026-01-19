/**
 * @file
 * @brief Bluetooth LE Audio context definitions
 *
 * Centralized context for advertising and PACS.
 *
 * Copyright (c) 2026 Demant A/S
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef AUDIO_CONTEXTS_H__
#define AUDIO_CONTEXTS_H__

#include <zephyr/bluetooth/audio/audio.h>

/* Choose the contexts ONCE here — used for both sink and source */
#define MANDATORY_SINK_CONTEXT                                                 \
	(BT_AUDIO_CONTEXT_TYPE_UNSPECIFIED | BT_AUDIO_CONTEXT_TYPE_CONVERSATIONAL)

#define AVAILABLE_SINK_CONTEXT MANDATORY_SINK_CONTEXT
#define AVAILABLE_SOURCE_CONTEXT MANDATORY_SINK_CONTEXT

#endif /* AUDIO_CONTEXTS_H__ */
