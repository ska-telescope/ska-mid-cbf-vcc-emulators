config_schema = lambda num_inputs, num_outputs: {
    "$schema": "https://json-schema.org/draft/2020-12/schema",
    "title": "Frequency Slice Selection Configuration",
    "description": "Configuration object for the Frequency Slice Selection IP Block.",
    "type": "object",
    "properties": {
        "output": {
            "type": "integer",
            "minimum": 0,
            "maximum": num_outputs - 1
        },
        "input": {
            "type": "integer",
            "minimum": 0,
            "maximum": num_inputs - 1
        }
    },
    "required": ["output", "input"]
}
