from Crypto.Signature import pkcs1_15
from Crypto.PublicKey import RSA
from Crypto.Hash import SHA256

def generate_key_pair():
    key = RSA.generate(2048)
    private_key = key.export_key()
    public_key = key.publickey().export_key()
    return private_key, public_key

def sign_message(message, private_key):
    key = RSA.import_key(private_key)
    h = SHA256.new(message)
    signature = pkcs1_15.new(key).sign(h)
    return signature

def verify_signature(message, signature, public_key):
    key = RSA.import_key(public_key)
    h = SHA256.new(message)
    try:
        pkcs1_15.new(key).verify(h, signature)
        return True
    except (ValueError, TypeError):
        return False

# Example usage
if __name__ == "__main__":
    # Generate key pair
    private_key, public_key = generate_key_pair()

    # Message to be signed
    message = b"Hello, this is a message to be signed and verified."

    # Sign the message
    signature = sign_message(message, private_key)
    print("Original Signature:", signature)
    
    print("Public Key :", public_key)

    # Verify the signature with the original public key
    if verify_signature(message, signature, public_key):
        print("Original Signature is valid.")
    else:
        print("Original Signature is invalid.")

    # Tamper with the public key
    tampered_public_key = public_key.replace(b'3', b'7')

    # Verify the signature with the tampered public key
    if verify_signature(message, signature, tampered_public_key):
        print("Tampered Signature is valid.")
    else:
        print("Tampered Signature is invalid.")

    # Tamper with the signature
    tampered_signature = signature.replace(b'5', b'9')

    # Verify the tampered signature with the original public key
    if verify_signature(message, tampered_signature, public_key):
        print("Tampered Signature is valid.")
    else:
        print("Tampered Signature is invalid.")
