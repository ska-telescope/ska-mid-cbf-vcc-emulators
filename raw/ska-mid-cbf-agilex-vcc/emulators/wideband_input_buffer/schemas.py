config_schema = {
    "$schema": "https://json-schema.org/draft/2020-12/schema",
    "title": "Wideband Input Buffer Configuration",
    "description": "Configuration object for the Wideband Input Buffer IP Block.",
    "type": "object",
    "properties": {
        "expected_sample_rate": {"type": "integer", "minimum": 0},
        "noise_diode_transition_holdoff_seconds": {"type": "integer", "minimum": 0},
        "expected_dish_band": {
            "type": "integer",
            "minimum": 1,
            "maximum": 6,
        },
    },
    "anyOf": [
        {"required": ["expected_sample_rate"]},
        {"required": ["noise_diode_transition_holdoff_seconds"]},
    ],
    "required": ["expected_dish_band"],
}

injection_schemas = {
    "force_register_value": {
        "$schema": "https://json-schema.org/draft/2020-12/schema",
        "title": "\"Force Register Value\" event value",
        "description": "A \"Force Register Event\" event sent to the emulator from the injector. It is a refined subset of the Emulator Event schema.",
        "type": "object",
        "properties": {
            "injection_type": {
                "const": "force_register_value"
            },
            "register_name": {
                "description": "Name of the register for which to update the value.",
                "type": ["string", "number", "boolean"],
                "pattern": r"(?i)^[A-Za-z_][A-Za-z0-9_]*$"
            },
            "register_value": {
                "description": "Value to force into the specified register."
            }
        },
        "required": [
            "injection_type",
            "register_name",
            "register_value"
        ]
    }
}
