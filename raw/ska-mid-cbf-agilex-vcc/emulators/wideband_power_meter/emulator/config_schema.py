config_schema = {
    "$schema": "https://json-schema.org/draft/2020-12/schema",
    "title": "Wideband Power Meter Configuration",
    "description": "Configuration object for the Wideband Power Meter IP Block.",
    "type": "object",
    "properties": {
        "averaging_time": {"type": "number"},
        "sample_rate": {"type": "number"},
        "flagging": {"type": "number", "enum": [0, 1, 2]},
    },
    "required": ["averaging_time", "sample_rate", "flagging"],
}
