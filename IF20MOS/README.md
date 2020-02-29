```

http://iot.siliconhill.cz/wall/#playground/installfest2020#

mos call FS.Get '{ "filename": "conf9.json" }'

curl -v -F file=@build/fw.zip http://192.168.1.23/update

mos --port=http://192.168.1.23/rpc call RPC.List

```
