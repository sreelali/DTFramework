// Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
// SPDX-License-Identifier: BSD-3-Clause Clear

/** @file create-dtb-apis.h
  FdtLib (edk2) Extended APIs
**/

/**
 * dtb_extn_add_tree - creates a new empty tree
 * @node: pointer to dtb_extn_node_handle object
 * @size: size of buffer
 * 
 */
int dtb_extn_add_tree(dtb_extn_node_handle *node, int size);

/**
 * dtb_extn_add_node - creates a new node
 * @node: pointer to dtb_extn_node_handle object
 * @path: name of the subnode to locate
 * @offset: structure block offset of a node
 * 
 */
int dtb_extn_add_node(dtb_extn_node_handle *node, char *path, int *offset);

/**
 * dtb_extn_add_prop_list_u8 - set property to u8 list
 * @node: pointer to dtb_extn_node_handle object
 * @prop_name: name of the property to change
 * @val: 8-bit integer list value for the property
 * @count: size of list
 * 
 */
int dtb_extn_add_prop_list_u8(dtb_extn_node_handle *node, char *prop_name, uint8_t *val, uint32_t count);

/**
 * dtb_extn_add_prop_list_u16 - set property to u16 list
 * @node: pointer to dtb_extn_node_handle object
 * @prop_name: name of the property to change
 * @val: 16-bit integer list value for the property
 * @count: size of list
 * 
 */
int dtb_extn_add_prop_list_u16(dtb_extn_node_handle *node, char *prop_name, uint16_t *val, uint32_t count);

/**
 * dtb_extn_add_prop_list_u32 - set property to u32 list
 * @node: pointer to dtb_extn_node_handle object
 * @prop_name: name of the property to change
 * @val: 32-bit integer list value for the property
 * @count: size of list
 * 
 */
int dtb_extn_add_prop_list_u32(dtb_extn_node_handle *node, char *prop_name, uint32_t *val, uint32_t count);

/**
 * dtb_extn_add_prop_list_u64 - set property to u64 list
 * @node: pointer to dtb_extn_node_handle object
 * @prop_name: name of the property to change
 * @val: 64-bit integer list value for the property
 * @count: size of list
 * 
 */
int dtb_extn_add_prop_list_u64(dtb_extn_node_handle *node, char *prop_name, uint64_t *val, uint32_t count);

/**
 * dtb_extn_add_prop_list_string - set property to string list
 * @node: pointer to dtb_extn_node_handle object
 * @prop_name: name of the property to change
 * @val: string list value for the property
 * @count: size of list
 * 
 */
int dtb_extn_add_prop_list_string(dtb_extn_node_handle *node, char *prop_name, char *val, uint32_t count);
