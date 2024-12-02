config_schema = {
    "$schema": "https://json-schema.org/draft/2020-12/schema",
    "title": "Packetizer Configuration",
    "description": "Configuration object for the Packetizer IP Block.",
    "type": "object",
    "properties": {
        "vid": {"type": "number"},
        "vcc_id": {"type": "number"},
        "fs_id": {"type": "number"},
    },
    "required": ["vid", "vcc_id", "fs_id"],
}
