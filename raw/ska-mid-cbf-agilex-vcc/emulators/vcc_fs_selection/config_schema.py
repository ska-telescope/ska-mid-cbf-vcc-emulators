config_schema = {
    "$schema": "https://json-schema.org/draft/2020-12/schema",
    "title": "Frequency Slice Selection Configuration",
    "description": "Configuration object for the Frequency Slice Selection IP Block.",
    "type": "object",
    "properties": {
        "band_select": {"type": "integer", "minimum": 1, "maximum": 5},
        "band_start_channel": {
            "type": "array",
            "items": {"type": "integer", "minimum": 0, "maximum": 2},
            "minItems": 2,
            "maxItems": 2,
        },
    },
    "required": ["band_select", "band_start_channel"],
}
