config_schema = lambda num_channels, num_polarisations: {
    "$schema": "https://json-schema.org/draft/2020-12/schema",
    "title": "B123VCC-OSPPFB Channeliser Configuration",
    "description": "Configuration object for the B123VCC-OSPPFB Channeliser IP Block.",
    "type": "object",
    "properties": {
        "sample_rate": {
            "type": "integer",
            "minimum": 0,
            "multipleOf": 18
        },
        "pol": {
            "type": "integer",
            "minimum": 0,
            "maximum": num_polarisations - 1
        },
        "channel": {
            "type": "integer",
            "minimum": 0,
            "maximum": num_channels - 1
        },
        "gain": {
            "type": "number"
        }
    },
    "anyOf": [
        {
            "required": ["sample_rate"]
        },
        {
            "required": ["pol", "channel", "gain"]
        }
    ],
    "dependentRequired": {
        "pol": ["channel", "gain"],
        "channel": ["pol", "gain"],
        "gain": ["pol", "channel"]
    }
}
