
### Sub-Resource Identity

Subresource Integrity (SRI) is a security feature that helps ensure that the resources you're loading on your web page (such as scripts or styles from a third-party source) haven't been tampered with

SRI works by allowing you to provide a cryptographic hash that the browser can check against the fetched resource.

If the resource's integrity does not match the provided hash, the browser discards it, mitigating the risk of the resource being compromised.

#### Command to generate integrity hash
```sh
openssl dgst -sha384 -binary jquery-3.6.0.min.js | openssl base64 -A
```

#### Example

```html
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Subresource Integrity Example</title>
</head>
<body>
  <script
    src="https://code.jquery.com/jquery-3.6.0.min.js"
    integrity="sha384-VZ39CpKcQyRtB5IdLAA8SALTI+tDxT1v9qTQEay0JH4="
    crossorigin="anonymous"></script>
</body>
</html>
```
