config_schema = {
    "$schema": "https://json-schema.org/draft/2020-12/schema",
    "title": "Wideband Input Buffer Configuration",
    "description": "Configuration object for the Wideband Input Buffer IP Block.",
    "type": "object",
    "properties": {
        "expected_sample_rate": {
            "type": "integer",
            "minimum": 0
        },
        "noise_diode_transition_holdoff_seconds": {
            "type": "number",
            "minimum": 0.0
        }
    },
    "anyOf": [
        {
            "required": ["expected_sample_rate"]
        },
        {
            "required": ["noise_diode_transition_holdoff_seconds"]
        }
    ]
}
