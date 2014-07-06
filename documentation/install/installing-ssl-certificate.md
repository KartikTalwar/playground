## Install SSL Certificate

### http://infoheap.com/setup-ssl-for-your-site-on-ubuntu-linux/


Here are the steps to setup the certificate (Positive SSL certificate for one domain):

First generate a certificate signing request (CSR). For apache2 use openssl as shown below:
openssl req -nodes -newkey rsa:2048 -keyout myserver.key -out server.csr
It will ask you following details:

Country Name (2 letter code) [AU]:
State or Province Name (full name) [Some-State]:
Locality Name (eg, city) []:
Organization Name (eg, company) [Internet Widgits Pty Ltd]:
Organizational Unit Name (eg, section) []:
Common Name (eg, YOUR name) []:
Email Address []:

Please enter the following 'extra' attributes
to be sent with your certificate request
A challenge password []:
An optional company name []:
For common name if you are requesting a domain specific certificate, then enter the FQDN (fully qualified domain name) here. e.g. apps.infoheap.com. For A challenge password, enter anything and make sure you make a note of it.
It will generate server.csr and myserver.key files. File myserver.key contains your private key should never be shared with anyone. File server.csr contains certificate request details and will be needed later.

Goto SSL list page in myaccount on Namecheap.com and  click on activate now for the certificate you bought.
namecheap-my-certificate-list
Keep the CSR (from file server.csr) handy. When you click Activate now, you will see the following screen. Select Apache + OpenSSL and and enter CSR value in the appropriate box. This is assuming you are using Apache2 and OpenSSL.
namecheap-digital-certificate-order-form-screen-1
Next screen you will be asked to select approver email as shown below.
namecheap-digital-certificate-order-form-screen-2This is to ensure that you have access to domain owner’s email address. In case your domain registration  info is public, then domain owner’s public email from whois record will be shown as an option. You can select that. Otherwise you may have to select postmaster@domainname.com. Whoever is providing you private registration, will provide you an option to forward all emails received on postmaster@ address.
Next screen will be a confirmation screen as shown below:
namecheap-digital-certificate-order-form-screen-3
If everything goes fine, you will see a congratulations message and following screen describing the process summary and what are the next steps.
namecheap-digital-certificate-order-process-summaryThe only step left is for Approver to approve the request.
You get the email which will look like this:
comodo-certificate-validation-emailTo approve click on the link provided and enter the validation code as described in the email.
Once approver approves the request, the domain owner will get an email containing certificate files in zip format.
Attached to this email you should find a .zip file containing:
  - Root CA Certificate - AddTrustExternalCARoot.crt
  - Intermediate CA Certificate - PositiveSSLCA2.crt
  - Your PositiveSSL Certificate - apps_infoheap_com.crt
The .crt file is your certificate and and myserver.key file generated above is your private file. Copy these to ssl-cert-my.pem (public certificate) and ssl-cert-my.key (private key) and move to the Ubuntu Linux server with Apache2 installed.

Next step is to configure apache and enable ssl. Run these commands:
sudo a2enmod ssl
sudo a2ensite default-ssl
Edit /etc/apache2/sites-enabled/default-ssl. Copy the section within <VirtualHost *:443> and create one more section for the site you obtained the certificate. Create appropriate entries for ServerName etc. e.g.
ServerName apps.infoheap.com
DocumentRoot /path/to/your/document/root
And copy File ssl-cert-my.pem to /etc/sss/certs/ directory and sss-cert-my.key to /etc/sss/private/ directory. Make sure that /etc/ssl/private/ssl-cert-my.key permissions are 640 and is in group ssl-cert.

sudo chmod 640 /etc/ssl/private/ssl-cert-my.key
sudo chown root:ssl-cert /etc/ssl/private/ssl-cert-my.key
Point SSLCertificateFile and SSLCertificateKeyFile to correct entries as shown below (change the file path values):

SSLCertificateFile /etc/ssl/certs/ssl-cert-my.pem
SSLCertificateKeyFile /etc/ssl/private/ssl-cert-my.key
Now restart Apache2 using sudo service apache2 restart and access your server on https. e.g. https://apps.infoheap.com/. If everything is fine, then no ssl warning should come.
