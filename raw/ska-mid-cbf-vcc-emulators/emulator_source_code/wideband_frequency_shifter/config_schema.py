config_schema = {
    "$schema": "https://json-schema.org/draft/2020-12/schema",
    "title": "Wideband Frequency Shifter Configuration",
    "description": "Configuration object for the Wideband Frequency Shifter IP Block.",
    "type": "object",
    "properties": {
        "shift_frequency": {
            "type": "number",
            "minimum": -100_000_000,
            "maximum": 100_000_000,
        }
    },
    "required": ["shift_frequency"]
}
