## Instagram Access Token


### Step 1

- Visit the API authorize URL
- Replace `CLIENT-ID` with the client ID from your registered app
- Replace `REDIRECT-URL` with the API redirect URL from your app.


```http
http://api.instagram.com/oauth/authorize/?client_id=CLIENT-ID&redirect_uri=REDIRECT-URI&response_type=code
```


### Step 2

- Authorize your app and get the `..com/?code=` from the callback URL
- Copy the `code`


### Step 3

- Run this command to get the AccessToken
- Replace `CLIENT-ID` with the same ID as above
- Replace `CLIENT-SECRET` with the secret from your manage clients page
- Replace `REDIRECT-URL` with the same as aboev
- Replace `CODE` with the newly obtained code

```sh
curl \-F 'client_id=CLIENT-ID' \
    -F 'client_secret=CLIENT-SECRET' \
    -F 'grant_type=authorization_code' \
    -F 'redirect_uri=YOUR-REDIRECT-URI' \
    -F 'code=CODE' \https://api.instagram.com/oauth/access_token
```


### Step 4

- Profit
