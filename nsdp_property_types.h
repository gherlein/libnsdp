#ifndef NSDP_PROPERTY_TYPES_H
#define NSDP_PROPERTY_TYPES_H

typedef struct nsdp_property_type_t {
  int (*to_text)(const void *data, unsigned data_size,
                 char* txt, unsigned txt_size);
  int (*from_text)(const char* txt, void *data, unsigned data_size);
} nsdp_property_type_t;

extern nsdp_property_type_t nsdp_property_type_str;
extern nsdp_property_type_t nsdp_property_type_u8;
extern nsdp_property_type_t nsdp_property_type_ip4;
extern nsdp_property_type_t nsdp_property_type_mac;
extern nsdp_property_type_t nsdp_property_type_port_status;
extern nsdp_property_type_t nsdp_property_type_port_statistics;
extern nsdp_property_type_t nsdp_property_type_vlan_engine;
extern nsdp_property_type_t nsdp_property_type_port_pvid;
extern nsdp_property_type_t nsdp_property_type_vlan_members;

#endif /* NSDP_PROPERTY_TYPES_H */
