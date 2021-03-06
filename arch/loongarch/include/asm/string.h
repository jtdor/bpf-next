/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2020-2022 Loongson Technology Corporation Limited
 */
#ifndef _ASM_STRING_H
#define _ASM_STRING_H

extern void *memset(void *__s, int __c, size_t __count);
extern void *memcpy(void *__to, __const__ void *__from, size_t __n);
extern void *memmove(void *__dest, __const__ void *__src, size_t __n);

#endif /* _ASM_STRING_H */
