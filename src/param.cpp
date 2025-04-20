#include "param.h"

const char *apSSID = "Erwin";
const char *apPassword = "Erwin123";
const char *ntpServer = "pool.ntp.org";
const long gmtOffset_sec = 0;
const int daylightOffset_sec = 0;
long lastUpdatCheck = 0;
const char *version = "0.0.2";
const long updateCheckInterval = 300000;
bool devnet = false;
bool opener_running = true;
long sucessfulGuesses = 0;
long failedGuesses = 0;
tm lastSubmittedTime;
unsigned long lastRequestTime;
const char *apiUrl = "https://api.erwin.lol";        // mainnet
const char *devUrl = "https://devnet-api.erwin.lol"; // devnet
String apiKey = "";                                  // <---------------------- SET THIS !!!
IPAddress apIP(192, 168, 4, 1);
const byte DNS_PORT = 53;
int sleepTime = 11000; // default sleep time in ms
String LastGuessAccepted = "undefined";