#pragma once

struct config_t {
    bool enabled = true;
    double radius = 0.75f;
};

extern config_t config;

void SaveConfig();
bool LoadConfig();