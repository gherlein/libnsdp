
# An open implementation of the Netgear Switch Discovery Protocol

## libnsdp

libnsdp provides an API to manipulate NSDP packets and a socket abstraction.

## nsdp_client - A simple NSDP client based on libevent

nsdp_client allows scanning for NSDP capable devices, as well as reading
and writing properties on these devices. Currently the following
properties are supported:

* model
* hostname
* mac
* ip
* netmask
* gateway
* password
* firmware-version
* port-status
* port-count

## Dependencies

nsdp_client requires libevent to be installed
